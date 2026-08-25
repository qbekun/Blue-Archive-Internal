#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_TOYLOG_DD_OFFSET UNITYSDK_OFFSET(0x9D51580)
#define NPA_EDITOR_TOYLOG_D_OFFSET UNITYSDK_OFFSET(0x9D515D0)
#define NPA_EDITOR_TOYLOG_I_OFFSET UNITYSDK_OFFSET(0x9D51620)
#define NPA_EDITOR_TOYLOG_IT_OFFSET UNITYSDK_OFFSET(0x9D4B5C0)
#define NPA_EDITOR_TOYLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D51670)

namespace NPA::Editor
{
	inline static constexpr unsigned int ToyLog_TypeDefinitionIndex = 26181;

	class ToyLog : public Il2CppObject
	{
	public:
		::System::Void dd(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOYLOG_DD_OFFSET))(str, nullptr);
		}

		::System::Void d(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOYLOG_D_OFFSET))(str, nullptr);
		}

		::System::Void i(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOYLOG_I_OFFSET))(str, nullptr);
		}

		::System::Void it(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOYLOG_IT_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOYLOG_.CTOR_OFFSET))(nullptr);
		}

	};
}

