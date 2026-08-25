#pragma once
#include "unitysdk.h"

#define PACKEDPLAYMODEBUILDLOGS_GET_RUNTIMEBUILDLOGS_OFFSET UNITYSDK_OFFSET(0x9DF3A90)
#define PACKEDPLAYMODEBUILDLOGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF3AA0)
#define PACKEDPLAYMODEBUILDLOGS_SET_RUNTIMEBUILDLOGS_OFFSET UNITYSDK_OFFSET(0x9DF3B20)

	inline static constexpr unsigned int PackedPlayModeBuildLogs_TypeDefinitionIndex = 36155;

	class PackedPlayModeBuildLogs : public Il2CppObject
	{
	public:
		Il2CppObject* m_RuntimeBuildLogs; // 0x10

		Il2CppObject* get_RuntimeBuildLogs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKEDPLAYMODEBUILDLOGS_GET_RUNTIMEBUILDLOGS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKEDPLAYMODEBUILDLOGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RuntimeBuildLogs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PACKEDPLAYMODEBUILDLOGS_SET_RUNTIMEBUILDLOGS_OFFSET))(arg, nullptr);
		}

	};

