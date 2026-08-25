#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentCollectionInfo; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1F73720)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_ADDEDCOLLECTIONINFO_OFFSET UNITYSDK_OFFSET(0x1F73730)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_ADDEDCOLLECTIONINFO_OFFSET UNITYSDK_OFFSET(0x1F73740)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_DISPLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1F73750)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_ISLEVELUP_OFFSET UNITYSDK_OFFSET(0x1F73760)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_DISPLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1F73770)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F73780)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_ALREADYCLEARD_OFFSET UNITYSDK_OFFSET(0x1F73820)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_ISLEVELUP_OFFSET UNITYSDK_OFFSET(0x1F73830)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1F73840)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_ALREADYCLEARD_OFFSET UNITYSDK_OFFSET(0x1F73850)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1F73860)
#define EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1F73870)

	inline static constexpr unsigned int EventContentStoryStageResultResponseMessage_TypeDefinitionIndex = 2529;

	class EventContentStoryStageResultResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x20
		Il2CppObject* _DisplaySequence_k__BackingField; // 0x28
		::System::Boolean _IsLevelUp_k__BackingField; // 0x30
		::MX::Data::EventContentCollectionInfo* _AddedCollectionInfo_k__BackingField; // 0x38
		::System::Int64 _StageId_k__BackingField; // 0x40
		::System::Boolean _AlreadyCleard_k__BackingField; // 0x48

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentCollectionInfo* get_AddedCollectionInfo()
		{
			return ((::MX::Data::EventContentCollectionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_ADDEDCOLLECTIONINFO_OFFSET))(nullptr);
		}

		::System::Void set_AddedCollectionInfo(::MX::Data::EventContentCollectionInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_ADDEDCOLLECTIONINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DisplaySequence()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_DISPLAYSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void set_IsLevelUp(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_ISLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_DisplaySequence(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_DISPLAYSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Boolean arg4, ::MX::Data::EventContentCollectionInfo* arg5, ::System::Int64 arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::MX::Data::EventContentCollectionInfo*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean get_AlreadyCleard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_ALREADYCLEARD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_ISLEVELUP_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_AlreadyCleard(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_SET_ALREADYCLEARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_GET_STAGEID_OFFSET))(nullptr);
		}

	};

