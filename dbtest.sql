PRAGMA foreign_keys = ON;
CREATE TABLE IF NOT EXISTS "Metadata" ("SchemaVersion"  INTEGER);
CREATE TABLE IF NOT EXISTS "Engine"
(
  "EngineId"  INTEGER PRIMARY KEY AUTOINCREMENT,
  "EngineName"  TEXT,
	"ConfigName"  TEXT,
  "ConfigPath" TEXT,
  "PipelineVersion" TEXT,
  "Description" TEXT,
	UNIQUE ("ConfigName" ASC, "PipelineVersion" ASC) ON CONFLICT IGNORE
);
CREATE TABLE IF NOT EXISTS "Imageset"
(
  "ImagesetId"  INTEGER PRIMARY KEY AUTOINCREMENT,
  "ProjectId"  INTEGER,
  "ImagesetUuid"  TEXT,
  "ImagesetBlobPath"  TEXT,
  "ImagesetXmlPath" TEXT,
  "ImagesetThumbnail" BLOB
);
