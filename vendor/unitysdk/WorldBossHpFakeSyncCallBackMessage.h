#pragma once
#include "unitysdk.h"

#define WORLDBOSSHPFAKESYNCCALLBACKMESSAGE_GET_WORLDBOSSCLIENTFAKEHPDIC_OFFSET UNITYSDK_OFFSET(0xC06CB0)
#define WORLDBOSSHPFAKESYNCCALLBACKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC040E0)
#define WORLDBOSSHPFAKESYNCCALLBACKMESSAGE_SET_WORLDBOSSCLIENTFAKEHPDIC_OFFSET UNITYSDK_OFFSET(0xC06CC0)
#define WORLDBOSSHPFAKESYNCCALLBACKMESSAGE_TRYGETHP_OFFSET UNITYSDK_OFFSET(0xBFC4C0)

	inline static constexpr unsigned int WorldBossHpFakeSyncCallBackMessage_TypeDefinitionIndex = 8792;

	class WorldBossHpFakeSyncCallBackMessage : public ::TriInspector::TitleAttribute
	{
	public:
		Il2CppObject* _WorldBossClientFakeHPDic_k__BackingField; // 0x18

		Il2CppObject* get_WorldBossClientFakeHPDic()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDBOSSHPFAKESYNCCALLBACKMESSAGE_GET_WORLDBOSSCLIENTFAKEHPDIC_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDBOSSHPFAKESYNCCALLBACKMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_WorldBossClientFakeHPDic(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDBOSSHPFAKESYNCCALLBACKMESSAGE_SET_WORLDBOSSCLIENTFAKEHPDIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetHp(::System::Int64 arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDBOSSHPFAKESYNCCALLBACKMESSAGE_TRYGETHP_OFFSET))(arg, arg2, nullptr);
		}

	};

