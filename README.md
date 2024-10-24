# Mario Party 1 US Decomp
Currently tested with 
- wsl2 and ubuntu 20.04 LTS.
- macOS 12

*For Windows, it is highly recommended to clone into the wsl filesystem and not /mnt/c or you will experience immensely slow building times/issues*

The original mario party 1 decomp repo can be found here: https://github.com/gamemasterplc/mpsource .<br/>
This was created before many of the decomp tools we have today.<br/>
For this reason, a new repo was created and things have been copied over where applicable.


# Building
1. `git clone https://github.com/mariopartyrd/marioparty` to get the repo.
2. `./install.sh` will get the dependencies, and also create a virtual environment
3. Take a vanilla US mario party 1 big-endian (`.z64`) rom named `baserom.us.z64` and place it in the root directory of the repo.
4. Run `pip install -r requirements.txt` to get all of the dependencies
5. Run `make setup`.
6. Compile with `make`, with or without `-j` or `-j$(nproc)`.
