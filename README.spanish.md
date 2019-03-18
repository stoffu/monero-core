# Aeon interfaz gráfica de usuario (GUI)

Copyright (c) 2014-2019, AEON, The Monero Project

## Recursos de Desarrolo

- Web: [aeon.cash](http://aeon.cash)
- Bitcointalk: https://bitcointalk.org/index.php?topic=641696.0
- Reddit: https://www.reddit.com/r/Aeon
- Github: [https://github.com/aeonix/aeon-gui](https://github.com/aeonix/aeon-gui)
- IRC: [#aeon on Freenode](irc://chat.freenode.net/#aeon)

## Respuesta de Vulnerabilidad

- La respuesta a la vulnerrabilidad debe ser redirigida a Monero porque gran parte del terreno técnico de Aeon se comparte
- Nuestro [Proceso de Respuesta de Vulnerabilidad](https://github.com/monero-project/meta/blob/master/VULNERABILITY_RESPONSE_PROCESS.md) fomenta la divulgación responsablemente
- También estamos disponibles a través de [HackerOne](https://hackerone.com/monero)

## Introducción

Aeon es una moneda digital privada, segura, imposible de rastrear y descentralizada. Usted es su banco, controla sus fondos y nadie puede rastrear sus transferencias a menos que usted lo permita.

**Privacidad:** Aeon utiliza un sistema criptográficamente sólido que le permite enviar y recibir fondos sin que sus transacciones se revelen fácilmente en la cadena de bloques (el libro mayor de transacciones que todos tienen). Esto garantiza que sus compras, recibos y todas las transferencias permanezcan absolutamente privadas de forma predeterminada.

**Seguridad:** Usando el poder de una red de consenso de persona-a-persona distribuida, cada transacción en la red está protegida criptográficamente. Las billeteras individuales tienen una semilla mnemotécnica de 25 palabras que solo se muestra una vez, y se pueden escribir para respaldar la billetera. Los archivos de la cartera se cifran con una frase de contraseña para garantizar que son inútiles en caso de robo.

**Intrazabilidad:** Al tomar ventaja de las firmas de anillo, una propiedad especial de cierto tipo de criptografía, Aeon puede garantizar que las transacciones no solo sean imposibles de rastrear, sino que tengan una medida de ambigüedad opcional que garantiza que las transacciones no se puedan vincular a un usuario individual o computadora.

## Sobre este Proyecto

Esta es la GUI para la [Implementación central de Aeon](https://github.com/aeonix/aeon). Es de código abierto y de uso completamente gratuito y sin restricciones, excepto las que se especifican en el acuerdo de licencia a continuación. No hay restricciones para que nadie cree una implementación alternativa de Aeon que use el protocolo y la red de una manera compatible.

Al igual que con muchos proyectos de desarrollo, el repositorio en Github se considera el área de "preparación" para los últimos cambios. Antes de implementar los cambios en esa rama en el repositorio principal, los desarrolladores individuales los prueban en sus propias sucursales, se envían como una solicitud de extracción y luego son evaluados por los colaboradores que se centran en las pruebas y revisiones de código. Dicho esto, el repositorio se debe considerar cuidadosamente antes de usarlo en un entorno de producción, a menos que haya un parche en el repositorio para un problema particular de detención del sistema que esté experimentando. En general, es una mejor idea utilizar una versión etiquetada para la estabilidad.

## Apoyando el Proyecto

Aeon es una empresa 100% patrocinada por la comunidad. Si desea sumarse a nuestros esfuerzos, lo más fácil que puede hacer es respaldar financieramente el proyecto. Se pueden hacer donaciones de Aeon y de Bitcoin a **donate.aeon.cash** si se usa un cliente que admite el [OpenAlias](https://openalias.org) estándar.

La dirección de donación de Aeon es: `WmsSWgtT1JPg5e3cK41hKXSHVpKW7e47bjgiKmWZkYrhSS5LhRemNyqayaSBtAQ6517eo5PtH9wxHVmM78JDZSUu2W8PqRiNs` (viewkey: `71bf19a7348ede17fa487167710dac401ef1556851bfd36b76040facf051630b`)

La dirección de la donación de Bitcoin es: `12Cyjf3qV6qLyXdzpLSLPdRFPUVidvnzFM`

Los patrocinadores también brindan gentilmente la financiación del desarrollo de GUI y / o algunos servicios de apoyo:

[<img width="80" src="https://static.getmonero.org/images/sponsors/mymonero.png"/>](https://mymonero.com)
[<img width="150" src="https://static.getmonero.org/images/sponsors/kitware.png?1"/>](http://kitware.com)
[<img width="100" src="https://static.getmonero.org/images/sponsors/dome9.png"/>](http://dome9.com)
[<img width="150" src="https://static.getmonero.org/images/sponsors/araxis.png"/>](http://araxis.com)
[<img width="150" src="https://static.getmonero.org/images/sponsors/jetbrains.png"/>](http://www.jetbrains.com/)
[<img width="150" src="https://static.getmonero.org/images/sponsors/navicat.png"/>](http://www.navicat.com/)
[<img width="150" src="https://static.getmonero.org/images/sponsors/symas.png"/>](http://www.symas.com/)

También hay varios grupos mineros que donan amablemente una parte de sus tarifas, [se puede encontrar una lista de ellos en nuestra publicación de Bitcointalk](https://bitcointalk.org/index.php?topic=641696.0).

## Licencia

Vea [Licencia](Licencia).

## Instalación de la interfaz gráfica de usuario (GUI) de Aeon desde un paquete

(**TODO**) ~Los paquetes están disponibles para~

* ~Arch Linux via AUR: [aeon-wallet-qt](https://aur.archlinux.org/packages/aeon-wallet-qt/)~
* ~Void Linux: xbps-install -S aeon-core~
* ~GuixSD: guix package -i aeon-core~

¡Empaquetar para su distribución favorita sería una contribución bienvenida!

## Compilando la interfaz gráfica de usuario (GUI) de Aeon desde el código

### En Linux:

(Probado en Ubuntu 17.10 x64, Ubuntu 18.04 x64 y Gentoo x64)

1. Instalar dependencias Aeon

  - Para distribuciones Debian (Debian, Ubuntu, Mint, Tails...)

	`sudo apt install build-essential cmake libboost-all-dev miniupnpc libunbound-dev graphviz doxygen libunwind8-dev pkg-config libssl-dev libzmq3-dev libsodium-dev libhidapi-dev`

  - Para Gentoo

	`sudo emerge app-arch/xz-utils app-doc/doxygen dev-cpp/gtest dev-libs/boost dev-libs/expat dev-libs/openssl dev-util/cmake media-gfx/graphviz net-dns/unbound net-libs/ldns net-libs/miniupnpc net-libs/zeromq sys-libs/libunwind dev-libs/libsodium dev-libs/hidapi`

2. Instalar Qt:

  *Nota*: Qt 5.7 Es la versión mínima requerida para construir la GUI. Esto hace que **algunas** distribuciones (en su mayoría basadas en Debian, como Ubuntu 16.x o Linux Mint 18.x) sean obsoletas. Aún puede construir la GUI si instala una [versión oficial de Qt](https://wiki.qt.io/Install_Qt_5_on_Ubuntu), pero esto no es oficialmente compatible.

  - Para Ubuntu 17.10+

    `sudo apt install qtbase5-dev qt5-default qtdeclarative5-dev qml-module-qtquick-controls qml-module-qtquick-controls2 qml-module-qtquick-dialogs qml-module-qtquick-xmllistmodel qml-module-qt-labs-settings qml-module-qt-labs-folderlistmodel qttools5-dev-tools qml-module-qtquick-templates2`

  - Para Gentoo

    `sudo emerge dev-qt/qtcore:5 dev-qt/qtdeclarative:5 dev-qt/qtquickcontrols:5 dev-qt/qtquickcontrols2:5 dev-qt/qtgraphicaleffects:5`

  - Opcional: Para construir con la bandera. `WITH_SCANNER`

    - Para Ubuntu

      `sudo apt install qtmultimedia5-dev qml-module-qtmultimedia libzbar-dev`

    - Para Gentoo

      El indicador * qml * USE TIENE que estar habilitado.

      `emerge dev-qt/qtmultimedia:5 media-gfx/zbar`


3. Copia el repositorio

    `git clone https://github.com/aeonix/aeon-gui.git`

4. Construir

    ```
    cd aeon-gui
    QT_SELECT=5 ./build.sh
    ```


El ejecutable se puede encontrar en la carpeta build/release/bin.

### En OS X:

1. Instalar Xcode desde AppStore

2. Instalar [homebrew](http://brew.sh/)

3. Instalar [Aeon](https://github.com/aeonix/aeon) dependencias:

  `brew install boost --c++11`

  `brew install openssl` - to install openssl headers

  `brew install pkgconfig`

  `brew install cmake`

  `brew install zeromq`

  *Nota*: Si cmake no puedo encontrar zmq.hpp en OS X, instalación `zmq.hpp` from https://github.com/zeromq/cppzmq en la carpeta `/usr/local/include` debería arreglar ese error.

4. Instalar Qt:

  `brew install qt5`  (or download QT 5.8+ from [qt.io](https://www.qt.io/download-open-source/))

  Si tienes una versión anterior de Qt instalada a través de homebrew, puedes forzarla a usar 5.x así:
  
  `brew link --force --overwrite qt5`

5. Agregue el directorio Qt bin a su ruta

    Example: `export PATH=$PATH:$HOME/Qt/5.8/clang_64/bin`

    Este es el directorio donde Qt 5.x está instalado en **su** sistema

6. Obtenga una copia actualizada del repositorio de aeon-gui

  `git clone https://github.com/aeonix/aeon-gui.git`

7. Entra en el repositorio

  `cd aeon-gui`

8. Comience la construcción

  `./build.sh`

El ejecutable se puede encontrar en la carpeta `build/release/bin`.

**Nota:** Solución para "ERROR: Xcode no está configurado correctamente"

Editar `$HOME/Qt/5.8/clang_64/mkspecs/features/mac/default_pre.prf`

reemplazar
`isEmpty($$list($$system("/usr/bin/xcrun -find xcrun 2>/dev/null")))`

con
`isEmpty($$list($$system("/usr/bin/xcrun -find xcodebuild 2>/dev/null")))`

Mas informacion: http://stackoverflow.com/a/35098040/1683164


### En Windows:

La interfaz gráfica de usuario (GUI) de Aeon en Windows es solo de 64 bits; Las versiones de Windows GUI de 32 bits ya no son oficialmente compatibles.

1. Intalar [MSYS2](https://www.msys2.org/), siga las instrucciones del sistema y los paquetes a las últimas versiones.

2. Abra un shell MSYS2 de 64 bits: use el método abreviado *MSYS2 MinGW de 64 bit*, o use el archivo por lotes `msys2_shell.cmd` con un parámetro `-mingw64`

3. Instalar paquetes MSYS2 para dependencias de Aeon; Los paquetes de 64 bits necesarios tienen `x86_64` en sus nombres.

    ```
    pacman -S mingw-w64-x86_64-toolchain make mingw-w64-x86_64-cmake mingw-w64-x86_64-boost mingw-w64-x86_64-openssl mingw-w64-x86_64-zeromq mingw-w64-x86_64-libsodium mingw-w64-x86_64-hidapi
    ```

    Encontrará más detalles sobre esas dependencias en la [documentación de Aeon](https://github.com/aeonix/aeon). Tenga en cuenta que no hay más necesidad de compilar Boost desde el codigo; como todo lo demás, puede instalarlo ahora con un paquete MSYS2.

4. Instalar Qt5

    ```
    pacman -S mingw-w64-x86_64-qt5
    ```

    Ya no es necesario descargar el instalador especial del sitio web de Qt, el paquete estándar MSYS2 para casi todas las circunstancias.

5. Instalar git

    ```
    pacman -S git
    ```

6. Copia el repositorio

    ```
    git clone https://github.com/aeonix/aeon-gui.git
    ```

7. Construir

    ```
    cd aeon-gui
    source ./build.sh release-static
    cd build
    make deploy
    ```

    **Note:** El uso de el `codigo` anterior es una solución sucia para la versión 5.11.2-3 disponible en el sistema de empaque MSYS2, vea https://github.com/monero-project/monero-gui/issues/1559 para mas informacion. 

El ejecutable se puede encontrar en la carpeta `.\release\bin`
