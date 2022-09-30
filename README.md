<<<<<<< HEAD
# Open Source Development Onboarding Project <!-- omit in toc -->

Welcome to the Open Source Development team! This is our onboarding project, which is designed to demonstrate how you can learn more about and contribute to a typical open source project.

~~F in chat for the old onboarding project~~

## Table of contents <!-- omit in toc -->

- [Getting started](#getting-started)
  - [Install Git](#install-git)
    - [Windows](#windows)
    - [macOS](#macos)
    - [Linux](#linux)
  - [Add SSH key to GitHub](#add-ssh-key-to-github)
- [Working on the onboarding project](#working-on-the-onboarding-project)
- [Tips](#tips)
  - [Makefile](#makefile)
  - [Some useful Git commands](#some-useful-git-commands)
- [Recommended reading (Optional)](#recommended-reading-optional)
- [License](#license)

## Getting started

### Install Git

You need to have Git installed and set up on your computer.

#### Windows

You can either install [Git for Windows](https://git-scm.com/download/win), or [set up and use Git in WSL](https://eecs280staff.github.io/p1-stats/setup_wsl.html).

It's very likely that you'll need a Linux environment at some point, so we recommend [setting up WSL](https://eecs280staff.github.io/p1-stats/setup_wsl.html) now.

#### macOS

The "Xcode Command Line Tools" comes with Git. To install it:

- Open `Terminal`
- Type in `git version`
- If you see something like this, you're good to go:
  ```shell
  $ git version
  git version 2.32.1 (Apple Git-133)
  ```
- If not, you should be prompted to install the "Xcode Command Line Tools"
- After the install finishes, run `git version` again.

#### Linux

Use your system's package manager (`apt`, `dnf`, `pacman`, etc) to install Git. The package is usually named `git`.

### Add SSH key to GitHub

***If you already have an SSH key set up, skip this section.***

You should interact with GitHub using SSH. This will avoid many issues down the line.

First, you need to generate an SSH key. If you already have one, you can reuse it. To generate a new key, run:

```bash
# You should have a passphrase for the SSH key. A passphrase helps prevent unauthorized use of your key.
# You may leave everything as default.
ssh-keygen -t ed25519
```

Then, get the content of your **public** key:

```bash
# `cat` prints the content of a file
# `~` refers to your home directory
cat ~/.ssh/id_ed25519.pub
```

Your **public** key should look like this:

```none
ssh-ed25519 AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA someone@computer
```

Now copy your **public** key content, an

- Go to [SSH and GPG keys under GitHub settings](https://github.com/settings/keys)
- Click [New SSH key](https://github.com/settings/ssh/new)
- Paste in the content of your **public** key into the "Key" field. Leave everything else as default.
- Click "Add SSH key" and enter your password when prompted.

## Working on the onboarding project

There are many things you can do with the onboarding project. At minimum, you should:

- Take a look at existing Issues and Pull Requests (PR).
- Look at the source code, compile, and run it. Use the provided Makefile.
- Fork the repo, and clone your fork to your computer.
- Make a minor change to `welcome.cpp` or `README.md`, then commit and push your changes using the `git` command line.
  - Do not edit any file with the GitHub web interface!
- Submit a PR with your changes.
  - Provide a descriptive title and description.
  - A good title/descrition should clearly state what you changed.

You may also:

- Fix an existing issue, improve existing code, or add a new feature. Then, submit a PR with your changes.
- Find an issue in the existing codebase, and report it by creating a new Issue.
- Take a look at other people's PRs, and review their code.
  - If you'd like to do this, ask a lead to add you as a reviewer to a PR.
  - You can approve, request changes, or add comments to the PR.
  - You may also provide specific feedback for specific line(s). To do this, drag and select the line number(s).
- Rebase existing PRs against the `main` branch, and resolve any merge conflicts.
  - Try to do this with the `git` command line. Do not use the GitHub web interface.

## Tips

### Makefile

The provided `Makefile` specifies these commands:

- `make` or `make release`: compile `./welcome`, with `-O2` and no debug symbols.
- `make debug`: compile `./welcome_debug`, with debug symbols.
- `make clean`: clean up all compiled binaries.

### Some useful Git commands

The following Git commands may be useful:

- `git clone`
- `git commit`
- `git pull`
- `git push`
- `git fetch`
- `git rebase`

If you'd like to learn more about them, consider these resources:

- [Git page on the ArchWiki](https://wiki.archlinux.org/title/git)
- Git's man page: type `man git` in your terminal, or see [here](https://man.archlinux.org/man/git.1)

## Recommended reading (Optional)

- [How to contribute to Open Source](https://opensource.guide/how-to-contribute/)
- [Video that demonstrates basic concepts of Git](https://www.youtube.com/watch?v=S9Do2p4PwtE)
- [Picturing Git: Conceptions and Misconceptions](https://www.biteinteractive.com/picturing-git-conceptions-and-misconceptions/)

## License

[MIT License](LICENSE)
=======
# Open Source Development Onboarding Project <!-- omit in toc -->

Welcome to the Open Source Development team! This is our onboarding project, which is designed to demonstrate how you can learn more about and contribute to a typical open source project.

~~F in chat for the old onboarding project~~

This Project is an advanced mathematical calculator that performs a thorough analysis of a select number *n*. From determining evenness to finding the *n*th taxicab number, this program will uncover all you ever wanted to know and more.

## Table of contents <!-- omit in toc -->

- [Getting started](#getting-started)
  - [Install Git](#install-git)
    - [Windows](#windows)
    - [macOS](#macos)
    - [Linux](#linux)
  - [Add SSH key to GitHub](#add-ssh-key-to-github)
- [Working on the onboarding project](#working-on-the-onboarding-project)
- [Tips](#tips)
  - [Makefile](#makefile)
  - [Some useful Git commands](#some-useful-git-commands)
- [Recommended reading (Optional)](#recommended-reading-optional)
- [License](#license)

## Getting started

### Install Git

You need to have Git installed and set up on your computer.

#### Windows

You can either install [Git for Windows](https://git-scm.com/download/win), or [set up and use Git in WSL](https://eecs280staff.github.io/p1-stats/setup_wsl.html).

It's very likely that you'll need a Linux environment at some point, so we recommend [setting up WSL](https://eecs280staff.github.io/p1-stats/setup_wsl.html) now.

#### macOS

The "Xcode Command Line Tools" comes with Git. To install it:

- Open `Terminal`
- Type in `git version`
- If you see something like this, you're good to go:
  ```shell
  $ git version
  git version 2.32.1 (Apple Git-133)
  ```
- If not, you should be prompted to install the "Xcode Command Line Tools"
- After the install finishes, run `git version` again.

#### Linux

Use your system's package manager (`apt`, `dnf`, `pacman`, etc) to install Git. The package is usually named `git`.

### Add SSH key to GitHub

***If you already have an SSH key set up, skip this section.***

You should interact with GitHub using SSH. This will avoid many issues down the line.

First, you need to generate an SSH key. If you already have one, you can reuse it. To generate a new key, run:

```bash
# You should have a passphrase for the SSH key. A passphrase helps prevent unauthorized use of your key.
# You may leave everything as default.
ssh-keygen -t ed25519
```

Then, get the content of your **public** key:

```bash
# `cat` prints the content of a file
# `~` refers to your home directory
cat ~/.ssh/id_ed25519.pub
```

Your **public** key should look like this:

```none
ssh-ed25519 AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA someone@computer
```

Now copy your **public** key content, and add it to your GitHub account:

- Go to [SSH and GPG keys under GitHub settings](https://github.com/settings/keys)
- Click [New SSH key](https://github.com/settings/ssh/new)
- Paste in the content of your **public** key into the "Key" field. Leave everything else as default.
- Click "Add SSH key" and enter your password when prompted.

## Working on the onboarding project

There are many things you can do with the onboarding project. At minimum, you should:

- Take a look at existing Issues and Pull Requests (PR).
- Look at the source code, compile, and run it. Use the provided Makefile.
- Fork the repo, and clone your fork to your computer.
- Make a minor change to `welcome.cpp` or `README.md`, then commit and push your changes using the `git` command line.
  - Do not edit any file with the GitHub web interface!
- Submit a PR with your changes.
  - Provide a descriptive title and description.
  - A good title/descrition should clearly state what you changed.

You may also:

- Fix an existing issue, improve existing code, or add a new feature. Then, submit a PR with your changes.
- Find an issue in the existing codebase, and report it by creating a new Issue.
- Take a look at other people's PRs, and review their code.
  - If you'd like to do this, ask a lead to add you as a reviewer to a PR.
  - You can approve, request changes, or add comments to the PR.
  - You may also provide specific feedback for specific line(s). To do this, drag and select the line number(s).
- Rebase existing PRs against the `main` branch, and resolve any merge conflicts.
  - Try to do this with the `git` command line. Do not use the GitHub web interface.

## Tips

### Makefile

The provided `Makefile` specifies these commands:

- `make` or `make release`: compile `./welcome`, with `-O2` and no debug symbols.
- `make debug`: compile `./welcome_debug`, with debug symbols.
- `make clean`: clean up all compiled binaries.

### Some useful Git commands

The following Git commands may be useful:

- `git clone`
- `git commit`
- `git pull`
- `git push`
- `git fetch`
- `git rebase`

If you'd like to learn more about them, consider these resources:

- [Git page on the ArchWiki](https://wiki.archlinux.org/title/git)
- Git's man page: type `man git` in your terminal, or see [here](https://man.archlinux.org/man/git.1)

## Recommended reading (Optional)

- [How to contribute to Open Source](https://opensource.guide/how-to-contribute/)
- [Video that demonstrates basic concepts of Git](https://www.youtube.com/watch?v=S9Do2p4PwtE)
- [Picturing Git: Conceptions and Misconceptions](https://www.biteinteractive.com/picturing-git-conceptions-and-misconceptions/)

## License

[MIT License](LICENSE)
>>>>>>> 805ad170938aeeb4df0491a845fa7d7d19ab2c64
