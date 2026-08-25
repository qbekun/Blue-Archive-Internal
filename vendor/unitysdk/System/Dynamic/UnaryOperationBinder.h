#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x96BEAC0)
#define SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_GET_OPERATION_OFFSET UNITYSDK_OFFSET(0x96BEB40)
#define SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_FALLBACKUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x96BEB50)
#define SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_FALLBACKUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96BEB70)

namespace System::Dynamic
{
	inline static constexpr unsigned int UnaryOperationBinder_TypeDefinitionIndex = 33569;

	class UnaryOperationBinder : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::ExpressionType* _Operation_k__BackingField; // 0x18

		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_Operation()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_GET_OPERATION_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackUnaryOperation(::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_FALLBACKUNARYOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackUnaryOperation(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_FALLBACKUNARYOPERATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UNARYOPERATIONBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

