# Born 2 Be Root

![Born 2 Be Root](https://github.com/mukhammadsiddiq/42Berlin-Guideline/blob/main/Born2beroot/img/Born_2_Be_Root_Image.png)

Welcome to the **Born 2 Be Root** project! This repository is dedicated to creating a fully secure virtual machine environment, combining cutting-edge technologies and robust security practices.


# Born2BeRoot Setup and Configuration Guide

Welcome to the Born2BeRoot project! This guide will help you download, install, and configure a secure virtual machine (VM) while introducing essential Linux administration concepts.

---

## Table of Contents

1. [Overview](#overview)
2. [Requirements](#requirements)
3. [Step-by-Step Setup](#step-by-step-setup)
   - [Downloading the Virtual Machine](#downloading-the-virtual-machine)
   - [Installing the Virtual Machine](#installing-the-virtual-machine)
   - [Configuring the Virtual Machine](#configuring-the-virtual-machine)
   - [Setting Up SSH and Firewall](#setting-up-ssh-and-firewall)
   - [Password Policies and User Management](#password-policies-and-user-management)
4. [Validation and Evaluation](#validation-and-evaluation)
5. [Frequently Used Commands](#frequently-used-commands)
6. [Conclusion](#conclusion)

---

## Overview

The Born2BeRoot project is a practical exercise in virtual machine setup and Linux system administration. By the end of this guide, you will have configured a VM with secure password policies, user groups, and SSH access. This is a foundational skill for developers, DevOps engineers, and system administrators.

---

## Requirements

- **Virtualization Software**: [VirtualBox](https://www.virtualbox.org/) or any other hypervisor.
- **Operating System ISO**: [Debian NetInstall ISO](https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/).
- **Basic Linux Knowledge**: Command-line familiarity is helpful but not mandatory.

---

## Step-by-Step Setup

### Downloading the Virtual Machine

1. Go to the [Debian ISO repository](https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/).
2. Download the latest `debian-xx.x.x-amd64-netinst.iso` file.

### Installing the Virtual Machine

1. Open VirtualBox and create a new VM:
   - **Machine Name**: Use a descriptive name (e.g., `Born2BeRoot`).
   - **Memory**: Allocate at least 1024 MB.
   - **Disk Size**: Set 12 GB or higher with dynamic allocation.
2. Attach the Debian ISO to the VM's optical drive under **Settings > Storage**.
3. Start the VM and follow the Debian installer prompts.

### Configuring the Virtual Machine

1. Select "Guided - use entire disk and set up encrypted LVM" for partitioning.
2. Set a hostname (e.g., `yourname42`) and a strong password.
3. Create a user (without `42` in the username) and assign a password.

### Setting Up SSH and Firewall

1. **Install and Configure SSH**:
   - Update your system and install the SSH server:
     ```bash
     sudo apt update && sudo apt install openssh-server
     ```
   - Open the SSH configuration file for editing:
     ```bash
     sudo vim /etc/ssh/sshd_config
     ```
   - Change the default SSH port from `22` to `4242`:
     ```plaintext
     Port 4242
     ```
   - Save and exit the file, then restart the SSH service:
     ```bash
     sudo systemctl restart ssh
     ```

2. **Verify SSH Configuration**:
   - Check the status of the SSH service:
     ```bash
     sudo systemctl status ssh
     ```
   - Test SSH connectivity from your host system:
     ```bash
     ssh your_username@127.0.0.1 -p 4242
     ```
   - If a connection error occurs, clear the known hosts:
     ```bash
     rm ~/.ssh/known_hosts
     ```

3. **Set Up UFW (Uncomplicated Firewall)**:
   - Install UFW if not already installed:
     ```bash
     sudo apt install ufw
     ```
   - Allow SSH and the custom port (4242):
     ```bash
     sudo ufw allow 4242
     sudo ufw enable
     ```
   - Check the current status of UFW:
     ```bash
     sudo ufw status numbered
     ```

4. **Verify Firewall Rules**:
   - Ensure the firewall is correctly configured to allow SSH access:
     ```bash
     sudo ufw status
     ```
   - Confirm that the `4242` port is listed as "ALLOW".

---

With these steps, your system is now configured to allow secure remote access via SSH on port 4242 and is protected by a firewall. Always ensure that only necessary ports are open to minimize vulnerabilities.

