#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
class SyncType;
namespace MX::NetworkProtocol { class Protocol; }

#define WORLDRAIDBOSSLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAFC10)
#define WORLDRAIDBOSSLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAFCA0)
#define WORLDRAIDBOSSLISTNETWORKTASK_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1FB06B0)
#define WORLDRAIDBOSSLISTNETWORKTASK_SET_SYNC_OFFSET UNITYSDK_OFFSET(0x1FB06C0)
#define WORLDRAIDBOSSLISTNETWORKTASK_SET_REQUESTONLYWORLDBOSSDATA_OFFSET UNITYSDK_OFFSET(0x1FB06D0)
#define WORLDRAIDBOSSLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FB06E0)
#define WORLDRAIDBOSSLISTNETWORKTASK__PROCESSSESSION_B__17_0_OFFSET UNITYSDK_OFFSET(0x1FB06F0)
#define WORLDRAIDBOSSLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0700)
#define WORLDRAIDBOSSLISTNETWORKTASK_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FB0710)
#define WORLDRAIDBOSSLISTNETWORKTASK_GET_SYNC_OFFSET UNITYSDK_OFFSET(0x1FB0720)
#define WORLDRAIDBOSSLISTNETWORKTASK_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FB0730)
#define WORLDRAIDBOSSLISTNETWORKTASK_GET_REQUESTONLYWORLDBOSSDATA_OFFSET UNITYSDK_OFFSET(0x1FB0740)
#define WORLDRAIDBOSSLISTNETWORKTASK_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1FB0750)

	inline static constexpr unsigned int WorldRaidBossListNetworkTask_TypeDefinitionIndex = 2892;

	class WorldRaidBossListNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x40
		::System::Int64 _SeasonId_k__BackingField; // 0x48
		::System::Boolean _RequestOnlyWorldBossData_k__BackingField; // 0x50
		SyncType* _Sync_k__BackingField; // 0x54

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_Sync(SyncType* arg)
		{
			((::System::Void(*)(SyncType*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_SET_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void set_RequestOnlyWorldBossData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_SET_REQUESTONLYWORLDBOSSDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__17_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK__PROCESSSESSION_B__17_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		SyncType* get_Sync()
		{
			return ((SyncType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_GET_SYNC_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_RequestOnlyWorldBossData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_GET_REQUESTONLYWORLDBOSSDATA_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTNETWORKTASK_SET_SEASONID_OFFSET))(arg, nullptr);
		}

	};

