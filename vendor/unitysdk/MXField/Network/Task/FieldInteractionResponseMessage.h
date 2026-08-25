#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldInteractionDB; }
namespace MXField::Shared::Model { class FieldMasteryDB; }
namespace MXField::Shared::NetworkProtocol { class FieldInteractionResponse; }

#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_GET_DISPLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0xEC14A0)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_GET_MASTERYDB_OFFSET UNITYSDK_OFFSET(0xEC14B0)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xEC14C0)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_GET_INTERACTIONDB_OFFSET UNITYSDK_OFFSET(0xEC14D0)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC10F0)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldInteractionResponseMessage_TypeDefinitionIndex = 10842;

	class FieldInteractionResponseMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MXField::Shared::Model::FieldInteractionDB* _InteractionDB_k__BackingField; // 0x18
		::MXField::Shared::Model::FieldMasteryDB* _MasteryDB_k__BackingField; // 0x20
		Il2CppObject* _ParcelInfos_k__BackingField; // 0x28
		Il2CppObject* _DisplaySequence_k__BackingField; // 0x30

		Il2CppObject* get_DisplaySequence()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_GET_DISPLAYSEQUENCE_OFFSET))(nullptr);
		}

		::MXField::Shared::Model::FieldMasteryDB* get_MasteryDB()
		{
			return ((::MXField::Shared::Model::FieldMasteryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_GET_MASTERYDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::MXField::Shared::Model::FieldInteractionDB* get_InteractionDB()
		{
			return ((::MXField::Shared::Model::FieldInteractionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_GET_INTERACTIONDB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::Shared::NetworkProtocol::FieldInteractionResponse* arg)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldInteractionResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

