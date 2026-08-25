#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INOTIFYDATAERRORINFO_GET_HASERRORS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_INOTIFYDATAERRORINFO_GETERRORS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_INOTIFYDATAERRORINFO_ADD_ERRORSCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_INOTIFYDATAERRORINFO_REMOVE_ERRORSCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int INotifyDataErrorInfo_TypeDefinitionIndex = 29477;

	class INotifyDataErrorInfo : public Il2CppObject
	{
	public:
		::System::Boolean get_HasErrors()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INOTIFYDATAERRORINFO_GET_HASERRORS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerable* GetErrors(::System::String* str)
		{
			return (return (::System::Collections::IEnumerable*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INOTIFYDATAERRORINFO_GETERRORS_OFFSET))(str, nullptr);
		}

		::System::Void add_ErrorsChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INOTIFYDATAERRORINFO_ADD_ERRORSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ErrorsChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INOTIFYDATAERRORINFO_REMOVE_ERRORSCHANGED_OFFSET))(arg, nullptr);
		}

	};
}

