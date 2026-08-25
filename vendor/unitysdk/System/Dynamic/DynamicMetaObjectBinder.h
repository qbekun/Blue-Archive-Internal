#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B6510)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x96B6560)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96B65C0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_CREATEARGUMENTMETAOBJECTS_OFFSET UNITYSDK_OFFSET(0x96B6BE0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GETUPDATEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x96B6DA0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_DEFER_OFFSET UNITYSDK_OFFSET(0x96B6EA0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_MAKEDEFERRED_OFFSET UNITYSDK_OFFSET(0x96B6FF0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GET_ISSTANDARDBINDER_OFFSET UNITYSDK_OFFSET(0x96B7140)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicMetaObjectBinder_TypeDefinitionIndex = 33548;

	class DynamicMetaObjectBinder : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Bind(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Linq::Expressions::LabelTarget* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Linq::Expressions::LabelTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_BIND_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateArgumentMetaObjects(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_CREATEARGUMENTMETAOBJECTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetUpdateExpression(::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GETUPDATEEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Defer(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_DEFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* MakeDeferred(::System::Dynamic::BindingRestrictions* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::BindingRestrictions*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_MAKEDEFERRED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsStandardBinder()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GET_ISSTANDARDBINDER_OFFSET))(nullptr);
		}

	};
}

