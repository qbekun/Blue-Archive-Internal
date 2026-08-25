#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_INVOKEBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96BE2C0)
#define SYSTEM_DYNAMIC_INVOKEBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x96BE360)
#define SYSTEM_DYNAMIC_INVOKEBINDER_FALLBACKINVOKE_OFFSET UNITYSDK_OFFSET(0x96BE3C0)
#define SYSTEM_DYNAMIC_INVOKEBINDER_FALLBACKINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_INVOKEBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96BE3F0)
#define SYSTEM_DYNAMIC_INVOKEBINDER_GET_ISSTANDARDBINDER_OFFSET UNITYSDK_OFFSET(0x96BE4C0)

namespace System::Dynamic
{
	inline static constexpr unsigned int InvokeBinder_TypeDefinitionIndex = 33565;

	class InvokeBinder : public Il2CppObject
	{
	public:
		::System::Dynamic::CallInfo* _CallInfo_k__BackingField; // 0x18

		::System::Void .ctor(::System::Dynamic::CallInfo* arg)
		{
			((::System::Void(*)(::System::Dynamic::CallInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEBINDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEBINDER_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackInvoke(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEBINDER_FALLBACKINVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackInvoke(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEBINDER_FALLBACKINVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsStandardBinder()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEBINDER_GET_ISSTANDARDBINDER_OFFSET))(nullptr);
		}

	};
}

