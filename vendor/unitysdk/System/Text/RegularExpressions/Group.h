#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ADA850)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x9ADA930)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9ADA940)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ADAAC0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Group_TypeDefinitionIndex = 29207;

	class Group : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::Group* s_emptyGroup; // 0x0
		::Il2CppArray<::System::Object*>* _caps; // 0x20
		::System::Int32 _capcount; // 0x28
		::System::Text::RegularExpressions::CaptureCollection* _capcoll; // 0x30
		::System::String* _Name_k__BackingField; // 0x38

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_.CTOR_OFFSET))(str, arg, arg, str, nullptr);
		}

		::System::Boolean get_Success()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_SUCCESS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

