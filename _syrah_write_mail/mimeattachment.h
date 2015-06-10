#ifndef MIMEATTACHMENT_H
#define MIMEATTACHMENT_H

#include <QFile>
#include "_syrah_network/mimepart.h"
#include "mimefile.h"

class MimeAttachment : public MimeFile
{
    Q_OBJECT
public:
    MimeAttachment(QFile* file);
    ~MimeAttachment();

protected:
    virtual void prepare();

};

#endif // MIMEATTACHMENT_H

