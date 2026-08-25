#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_NOTHROWGETBINDERMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94A85C0)
#define NEWTONSOFT_JSON_UTILITIES_NOTHROWGETBINDERMEMBER_FALLBACKGETMEMBER_OFFSET UNITYSDK_OFFSET(0x94A8610)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int NoThrowGetBinderMember_TypeDefinitionIndex = 31848;

	class NoThrowGetBinderMember : public Il2CppObject
	{
	public:
		::System::Dynamic::GetMemberBinder* _innerBinder; // 0x28

		::System::Void .ctor(::System::Dynamic::GetMemberBinder* arg)
		{
			((::System::Void(*)(::System::Dynamic::GetMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_NOTHROWGETBINDERMEMBER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_NOTHROWGETBINDERMEMBER_FALLBACKGETMEMBER_OFFSET))(arg, arg, nullptr);
		}

	};
}

