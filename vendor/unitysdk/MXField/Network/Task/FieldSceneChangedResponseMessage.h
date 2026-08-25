#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC1C80)
#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDRESPONSEMESSAGE_GET_SCENEID_OFFSET UNITYSDK_OFFSET(0xEC1FD0)
#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDRESPONSEMESSAGE_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xEC1FE0)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldSceneChangedResponseMessage_TypeDefinitionIndex = 10848;

	class FieldSceneChangedResponseMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _DateId_k__BackingField; // 0x18
		::System::Int64 _SceneId_k__BackingField; // 0x20

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_SceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDRESPONSEMESSAGE_GET_SCENEID_OFFSET))(nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDRESPONSEMESSAGE_GET_DATEID_OFFSET))(nullptr);
		}

	};
}

