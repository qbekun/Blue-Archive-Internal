#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9202830)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9202850)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_FULLTYPENAME_OFFSET UNITYSDK_OFFSET(0x9202A90)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x9202AA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_SETTYPE_OFFSET UNITYSDK_OFFSET(0x9201B40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x9202AC0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_DEMANDFORUNSAFEASSEMBLYNAMEASSIGNMENTS_OFFSET UNITYSDK_OFFSET(0x9202AB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ISASSEMBLYNAMEASSIGNMENTSAFE_OFFSET UNITYSDK_OFFSET(0x9202B20)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x9202CA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x9202CB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ISFULLTYPENAMESETEXPLICIT_OFFSET UNITYSDK_OFFSET(0x9202CC0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ISASSEMBLYNAMESETEXPLICIT_OFFSET UNITYSDK_OFFSET(0x9202CD0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9202CE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_EXPANDARRAYS_OFFSET UNITYSDK_OFFSET(0x9202D60)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x9201AA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x9203080)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x9203120)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x92031C0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x9203260)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x9203310)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x92033B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x9203460)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x9203510)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x92035C0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9202E80)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x91FE550)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x9203670)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x9203730)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENTNOTHROW_OFFSET UNITYSDK_OFFSET(0x9203840)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x92016F0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUENOTHROW_OFFSET UNITYSDK_OFFSET(0x92015D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x92038C0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT32_OFFSET UNITYSDK_OFFSET(0x9203A20)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT64_OFFSET UNITYSDK_OFFSET(0x9203B80)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSINGLE_OFFSET UNITYSDK_OFFSET(0x9203CE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9203E40)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationInfo_TypeDefinitionIndex = 24610;

	class SerializationInfo : public Il2CppObject
	{
	public:
		::System::Int32 defaultSize; // 0x0
		::System::String* s_mscorlibAssemblySimpleName; // 0x0
		::System::String* s_mscorlibFileName; // 0x0
		::Il2CppArray<::System::Object*>* m_members; // 0x10
		::Il2CppArray<::System::Object*>* m_data; // 0x18
		::Il2CppArray<::System::Object*>* m_types; // 0x20
		Il2CppObject* m_nameToIndex; // 0x28
		::System::Int32 m_currMember; // 0x30
		::System::Runtime::Serialization::IFormatterConverter* m_converter; // 0x38
		::System::String* m_fullTypeName; // 0x40
		::System::String* m_assemName; // 0x48
		::System::Type* objectType; // 0x50
		::System::Boolean isFullTypeNameSetExplicit; // 0x58
		::System::Boolean isAssemblyNameSetExplicit; // 0x59
		::System::Boolean requireSameTokenInPartialTrust; // 0x5A

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::Serialization::IFormatterConverter* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Serialization::IFormatterConverter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::Serialization::IFormatterConverter* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_FullTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_FULLTYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_AssemblyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ASSEMBLYNAME_OFFSET))(nullptr);
		}

		::System::Void SetType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_SETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DemandForUnsafeAssemblyNameAssignments(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_DEMANDFORUNSAFEASSEMBLYNAMEASSIGNMENTS_OFFSET))(str, str, nullptr);
		}

		::System::Boolean IsAssemblyNameAssignmentSafe(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ISASSEMBLYNAMEASSIGNMENTSAFE_OFFSET))(str, str, nullptr);
		}

		::System::Int32 get_MemberCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_MEMBERCOUNT_OFFSET))(nullptr);
		}

		::System::Type* get_ObjectType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFullTypeNameSetExplicit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ISFULLTYPENAMESETEXPLICIT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAssemblyNameSetExplicit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GET_ISASSEMBLYNAMESETEXPLICIT_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::SerializationInfoEnumerator* GetEnumerator()
		{
			return (return (::System::Runtime::Serialization::SerializationInfoEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void ExpandArrays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_EXPANDARRAYS_OFFSET))(nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::Byte arg)
		{
			((::System::Void(*)(::System::String*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::Int16 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::DateTime* arg)
		{
			((::System::Void(*)(::System::String*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddValueInternal(::System::String* str, ::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_ADDVALUEINTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void UpdateValue(::System::String* str, ::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_UPDATEVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 FindElement(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_FINDELEMENT_OFFSET))(str, nullptr);
		}

		::System::Object* GetElement(::System::String* str, ::System::Type&* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Object* GetElementNoThrow(::System::String* str, ::System::Type&* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETELEMENTNOTHROW_OFFSET))(str, arg, nullptr);
		}

		::System::Object* GetValue(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Object* GetValueNoThrow(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETVALUENOTHROW_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean GetBoolean(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETBOOLEAN_OFFSET))(str, nullptr);
		}

		::System::Int32 GetInt32(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT32_OFFSET))(str, nullptr);
		}

		::System::Int64 GetInt64(::System::String* str)
		{
			return (return (::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETINT64_OFFSET))(str, nullptr);
		}

		::System::Single GetSingle(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSINGLE_OFFSET))(str, nullptr);
		}

		::System::String* GetString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONINFO_GETSTRING_OFFSET))(str, nullptr);
		}

	};
}

