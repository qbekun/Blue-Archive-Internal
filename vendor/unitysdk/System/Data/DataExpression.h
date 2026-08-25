#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97480E0)
#define SYSTEM_DATA_DATAEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x975BA90)
#define SYSTEM_DATA_DATAEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x9747E90)
#define SYSTEM_DATA_DATAEXPRESSION_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x975D080)
#define SYSTEM_DATA_DATAEXPRESSION_BIND_OFFSET UNITYSDK_OFFSET(0x975CF40)
#define SYSTEM_DATA_DATAEXPRESSION_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x9750D10)
#define SYSTEM_DATA_DATAEXPRESSION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x975D090)
#define SYSTEM_DATA_DATAEXPRESSION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x975D0A0)
#define SYSTEM_DATA_DATAEXPRESSION_INVOKE_OFFSET UNITYSDK_OFFSET(0x975D320)
#define SYSTEM_DATA_DATAEXPRESSION_GETDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x975D420)
#define SYSTEM_DATA_DATAEXPRESSION_ISTABLEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x975D430)
#define SYSTEM_DATA_DATAEXPRESSION_ISUNKNOWN_OFFSET UNITYSDK_OFFSET(0x975D450)
#define SYSTEM_DATA_DATAEXPRESSION_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x975D4A0)
#define SYSTEM_DATA_DATAEXPRESSION_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x975D4C0)
#define SYSTEM_DATA_DATAEXPRESSION_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x97596E0)

namespace System::Data
{
	inline static constexpr unsigned int DataExpression_TypeDefinitionIndex = 32250;

	class DataExpression : public Il2CppObject
	{
	public:
		::System::String* _originalExpression; // 0x10
		::System::Boolean _parsed; // 0x18
		::System::Boolean _bound; // 0x19
		::System::Data::ExpressionNode* _expr; // 0x20
		::System::Data::DataTable* _table; // 0x28
		::System::Data::Common::StorageType* _storageType; // 0x30
		::System::Type* _dataType; // 0x38
		::Il2CppArray<::System::Object*>* _dependency; // 0x40

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* get_Expression()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_GET_EXPRESSION_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_GET_HASVALUE_OFFSET))(nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_BIND_OFFSET))(arg, nullptr);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_DEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_EVALUATE_OFFSET))(nullptr);
		}

		::System::Object* Evaluate(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_EVALUATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDependency()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_GETDEPENDENCY_OFFSET))(nullptr);
		}

		::System::Boolean IsTableAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_ISTABLEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean IsUnknown(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_ISUNKNOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean ToBoolean(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

	};
}

