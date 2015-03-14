#ifndef DUBPROJECTNODE_H
#define DUBPROJECTNODE_H

#include <projectexplorer/projectnodes.h>

namespace DubProjectManager {

class DubProjectNode : public ProjectExplorer::ProjectNode
{
#if QTCREATOR_MINOR_VERSION < 4
    Q_OBJECT
#else
#endif
public:
    explicit DubProjectNode(const QString filename);

    // pure ProjectExplorer::ProjectNode

    virtual bool canAddSubProject(const QString &proFilePath) const Q_DECL_OVERRIDE;

    virtual bool addSubProjects(const QStringList &proFilePaths) Q_DECL_OVERRIDE;
    virtual bool removeSubProjects(const QStringList &proFilePaths) Q_DECL_OVERRIDE;

    // others

    bool addFilePath(const QString& path);
    virtual bool addFiles(const QStringList &filePaths, QStringList *notAdded);
    void clear();
};

} // namespace DubProjectManager

#endif // DUBPROJECTNODE_H
