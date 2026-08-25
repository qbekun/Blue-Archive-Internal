#pragma once
#include "../unitysdk.h"

#define TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACEUTIL_CONVERTOBJECT_OFFSET UNITYSDK_OFFSET(0x9BA9550)
#define TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACEUTIL_TOCAMELCASE_OFFSET UNITYSDK_OFFSET(0x9BA9BA0)

namespace ToyWebViewShared
{
	inline static constexpr unsigned int NXPJavaScriptInterfaceUtil_TypeDefinitionIndex = 25397;

	class NXPJavaScriptInterfaceUtil : public Il2CppObject
	{
	public:
		::System::String* ConvertObject(::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACEUTIL_CONVERTOBJECT_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToCamelCase(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPJAVASCRIPTINTERFACEUTIL_TOCAMELCASE_OFFSET))(str, nullptr);
		}

	};
}

