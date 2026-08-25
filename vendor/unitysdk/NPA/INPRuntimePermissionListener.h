#pragma once
#include "../unitysdk.h"

#define NPA_INPRUNTIMEPERMISSIONLISTENER_ONREQUESTPERMISSIONSRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INPRuntimePermissionListener_TypeDefinitionIndex = 25532;

	class INPRuntimePermissionListener : public Il2CppObject
	{
	public:
		::System::Void OnRequestPermissionsResult(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPRUNTIMEPERMISSIONLISTENER_ONREQUESTPERMISSIONSRESULT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

