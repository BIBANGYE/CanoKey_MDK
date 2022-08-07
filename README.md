# CanoKey_MDK
## 介绍

开源安全密钥的核心实现，支持：

- 带有 ed25519 和 HMAC-secret 的 U2F / FIDO2
- OpenPGP Card V3.4，[支持算法列表](https://docs.canokeys.org/userguide/openpgp/#supported-algorithm)
- PIV (NIST SP 800-73-4)
- HOTP / TOTP
- NDEF

The USB mode contains 3 different interfaces:

- Interface 0: U2F / FIDO2, which is an HID interface
- Interface 1: PIV/OpenPGP/OATH Card, which is a CCID interface
- Interface 2: WebUSB, which is not a standard interface
- Interface 3: Keyboard

The WebUSB interface is used to configure the key via a web-based interface.

[CanoKey on STM32](https://github.com/canokeys/canokey-stm32)

- [协议](https://docs.canokeys.org/development/protocols/)

[Canokey Core](https://github.com/canokeys/canokey-core)

[CanoKey Hardware Design](https://github.com/canokeys/canokey-hardware)

- `CanoKey NFC-A`: The Canokey with on-board USB Type-A connector and NFC antenna.
- `CanoKey NFC-C`: The Canokey with USB Type-C connector and NFC antenna.
- `CanoKey Nano-A`: The small-sized Canokey which fits inside USB Type-A port.
