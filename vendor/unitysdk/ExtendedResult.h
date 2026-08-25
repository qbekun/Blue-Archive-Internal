#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int ExtendedResult_TypeDefinitionIndex = 36637;

	class ExtendedResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ExtendedResult* IOErrorRead; // 0x0
		ExtendedResult* IOErrorShortRead; // 0x0
		ExtendedResult* IOErrorWrite; // 0x0
		ExtendedResult* IOErrorFsync; // 0x0
		ExtendedResult* IOErrorDirFSync; // 0x0
		ExtendedResult* IOErrorTruncate; // 0x0
		ExtendedResult* IOErrorFStat; // 0x0
		ExtendedResult* IOErrorUnlock; // 0x0
		ExtendedResult* IOErrorRdlock; // 0x0
		ExtendedResult* IOErrorDelete; // 0x0
		ExtendedResult* IOErrorBlocked; // 0x0
		ExtendedResult* IOErrorNoMem; // 0x0
		ExtendedResult* IOErrorAccess; // 0x0
		ExtendedResult* IOErrorCheckReservedLock; // 0x0
		ExtendedResult* IOErrorLock; // 0x0
		ExtendedResult* IOErrorClose; // 0x0
		ExtendedResult* IOErrorDirClose; // 0x0
		ExtendedResult* IOErrorSHMOpen; // 0x0
		ExtendedResult* IOErrorSHMSize; // 0x0
		ExtendedResult* IOErrorSHMLock; // 0x0
		ExtendedResult* IOErrorSHMMap; // 0x0
		ExtendedResult* IOErrorSeek; // 0x0
		ExtendedResult* IOErrorDeleteNoEnt; // 0x0
		ExtendedResult* IOErrorMMap; // 0x0
		ExtendedResult* LockedSharedcache; // 0x0
		ExtendedResult* BusyRecovery; // 0x0
		ExtendedResult* CannottOpenNoTempDir; // 0x0
		ExtendedResult* CannotOpenIsDir; // 0x0
		ExtendedResult* CannotOpenFullPath; // 0x0
		ExtendedResult* CorruptVTab; // 0x0
		ExtendedResult* ReadonlyRecovery; // 0x0
		ExtendedResult* ReadonlyCannotLock; // 0x0
		ExtendedResult* ReadonlyRollback; // 0x0
		ExtendedResult* AbortRollback; // 0x0
		ExtendedResult* ConstraintCheck; // 0x0
		ExtendedResult* ConstraintCommitHook; // 0x0
		ExtendedResult* ConstraintForeignKey; // 0x0
		ExtendedResult* ConstraintFunction; // 0x0
		ExtendedResult* ConstraintNotNull; // 0x0
		ExtendedResult* ConstraintPrimaryKey; // 0x0
		ExtendedResult* ConstraintTrigger; // 0x0
		ExtendedResult* ConstraintUnique; // 0x0
		ExtendedResult* ConstraintVTab; // 0x0
		ExtendedResult* NoticeRecoverWAL; // 0x0
		ExtendedResult* NoticeRecoverRollback; // 0x0

	};

