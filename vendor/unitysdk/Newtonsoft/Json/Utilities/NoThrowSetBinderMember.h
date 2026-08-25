#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_NOTHROWSETBINDERMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94A8770)
#define NEWTONSOFT_JSON_UTILITIES_NOTHROWSETBINDERMEMBER_FALLBACKSETMEMBER_OFFSET UNITYSDK_OFFSET(0x94A87C0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int NoThrowSetBinderMember_TypeDefinitionIndex = 31849;

	class NoThrowSetBinderMember : public Il2CppObject
	{
	public:
		::System::Dynamic::SetMemberBinder* _innerBinder; // 0x28

		::System::Void .ctor(::System::Dynamic::SetMemberBinder* arg)
		{
			((::System::Void(*)(::System::Dynamic::SetMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_NOTHROWSETBINDERMEMBER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackSetMember(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_NOTHROWSETBINDERMEMBER_FALLBACKSETMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

