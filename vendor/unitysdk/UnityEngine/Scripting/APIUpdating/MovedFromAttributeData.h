#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTEDATA_SET_OFFSET UNITYSDK_OFFSET(0xA24B4C0)

namespace UnityEngine::Scripting::APIUpdating
{
	inline static constexpr unsigned int MovedFromAttributeData_TypeDefinitionIndex = 31308;

	class MovedFromAttributeData : public Il2CppObject
	{
	public:
		::System::String* className; // 0x10
		::System::String* nameSpace; // 0x18
		::System::String* assembly; // 0x20
		::System::Boolean classHasChanged; // 0x28
		::System::Boolean nameSpaceHasChanged; // 0x29
		::System::Boolean assemblyHasChanged; // 0x2A
		::System::Boolean autoUdpateAPI; // 0x2B

		::System::Void Set(::System::Boolean arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTEDATA_SET_OFFSET))(arg, str, str, str, nullptr);
		}

	};
}

