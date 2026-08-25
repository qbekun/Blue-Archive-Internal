#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_ENUMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x94A8A90)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int EnumInfo_TypeDefinitionIndex = 31851;

	class EnumInfo : public Il2CppObject
	{
	public:
		::System::Boolean IsFlags; // 0x10
		::Il2CppArray<::System::Object*>* Values; // 0x18
		::Il2CppArray<::System::Object*>* Names; // 0x20
		::Il2CppArray<::System::Object*>* ResolvedNames; // 0x28

		::System::Void .ctor(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

