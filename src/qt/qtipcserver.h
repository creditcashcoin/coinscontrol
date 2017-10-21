#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define coinscontrol-Qt message queue name
#define BITCOINURI_QUEUE_NAME "coinscontrolURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
