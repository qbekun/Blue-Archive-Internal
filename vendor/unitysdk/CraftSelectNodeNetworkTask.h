#pragma once
#include "unitysdk.h"

namespace FlatData { class CraftNodeTier; }
namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTSELECTNODENETWORKTASK_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F54370)
#define CRAFTSELECTNODENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F54380)
#define CRAFTSELECTNODENETWORKTASK_SET_CRAFTNODEINDEX_OFFSET UNITYSDK_OFFSET(0x1F54390)
#define CRAFTSELECTNODENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F543A0)
#define CRAFTSELECTNODENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F54430)
#define CRAFTSELECTNODENETWORKTASK_SET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F54440)
#define CRAFTSELECTNODENETWORKTASK_GET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F54450)
#define CRAFTSELECTNODENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F54460)
#define CRAFTSELECTNODENETWORKTASK_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F544F0)
#define CRAFTSELECTNODENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F54500)
#define CRAFTSELECTNODENETWORKTASK_GET_CRAFTNODEINDEX_OFFSET UNITYSDK_OFFSET(0x1F54710)

	inline static constexpr unsigned int CraftSelectNodeNetworkTask_TypeDefinitionIndex = 2314;

	class CraftSelectNodeNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CraftSlotId_k__BackingField; // 0x40
		::System::Int64 _CraftNodeIndex_k__BackingField; // 0x48
		::FlatData::CraftNodeTier* _NodeType_k__BackingField; // 0x50

		::FlatData::CraftNodeTier* get_NodeType()
		{
			return ((::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CraftNodeIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_SET_CRAFTNODEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_CraftSlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_SET_CRAFTSLOTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CraftSlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_GET_CRAFTSLOTID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_NodeType(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_SET_NODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_CraftNodeIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODENETWORKTASK_GET_CRAFTNODEINDEX_OFFSET))(nullptr);
		}

	};

