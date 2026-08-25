#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_NAMENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97619F0)
#define SYSTEM_DATA_NAMENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9761CC0)
#define SYSTEM_DATA_NAMENODE_GET_ISSQLCOLUMN_OFFSET UNITYSDK_OFFSET(0x9761CF0)
#define SYSTEM_DATA_NAMENODE_BIND_OFFSET UNITYSDK_OFFSET(0x9761D10)
#define SYSTEM_DATA_NAMENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9761FC0)
#define SYSTEM_DATA_NAMENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9761FF0)
#define SYSTEM_DATA_NAMENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9762090)
#define SYSTEM_DATA_NAMENODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x97620D0)
#define SYSTEM_DATA_NAMENODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x97620E0)
#define SYSTEM_DATA_NAMENODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9762130)
#define SYSTEM_DATA_NAMENODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9762180)
#define SYSTEM_DATA_NAMENODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x97621D0)
#define SYSTEM_DATA_NAMENODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x9762230)
#define SYSTEM_DATA_NAMENODE_PARSENAME_OFFSET UNITYSDK_OFFSET(0x9761A40)

namespace System::Data
{
	inline static constexpr unsigned int NameNode_TypeDefinitionIndex = 32264;

	class NameNode : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x18
		::System::Boolean _found; // 0x20
		::System::Data::DataColumn* _column; // 0x28

		::System::Void .ctor(::System::Data::DataTable* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean get_IsSqlColumn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_GET_ISSQLCOLUMN_OFFSET))(nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_EVAL_OFFSET))(nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_ISCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean IsTableConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_ISTABLECONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_DEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_OPTIMIZE_OFFSET))(nullptr);
		}

		::System::String* ParseName(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_PARSENAME_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

