# Introduction

SKISSM implements the Signal protocol and aims to make it easy to build versatile end-to-end messaging applications. The two crucial security properties provided:

- End-to-end encryption

  Only sender and recipient (and not even the server) can decrypt the content.
- Forward secrecy

  Past sessions are protected against future compromises of keys or passwords.

SKISSM software architecture

<p align="center">
  <img src="https://www.e2eelab.org/assets/images/skissm_software_architecture-55ab2d852b347953ae21dc499ea5665a.svg" width="480" />
</p>

# Build

```bash
mkdir build
cd build
cmake ..
make -j8
```

# Test

```bash
cd build/tests
ctest
```

# Doc

[SKISSM Whitepaper](https://www.e2eelab.org/docs/skissm-whitepapers/)

# Licensing

SKISSM is available under two licenses:

- GPLv3, for the growing ecosystem of Free and Open Source Software.
- Commercial, for use in closed-source projects.

For commercial license without the source code conveying liability or any other questions,
please contact <ziv@citi.sinica.edu.tw>.
