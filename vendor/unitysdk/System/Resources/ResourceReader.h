#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_RESOURCEREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x922BE90)
#define SYSTEM_RESOURCES_RESOURCEREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x922C2B0)
#define SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9235060)
#define SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9234F90)
#define SYSTEM_RESOURCES_RESOURCEREADER_READUNALIGNEDI4_OFFSET UNITYSDK_OFFSET(0x9235070)
#define SYSTEM_RESOURCES_RESOURCEREADER_SKIPSTRING_OFFSET UNITYSDK_OFFSET(0x9235080)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEHASH_OFFSET UNITYSDK_OFFSET(0x9235150)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEPOSITION_OFFSET UNITYSDK_OFFSET(0x9235190)
#define SYSTEM_RESOURCES_RESOURCEREADER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92352C0)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92352D0)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATORINTERNAL_OFFSET UNITYSDK_OFFSET(0x922DAB0)
#define SYSTEM_RESOURCES_RESOURCEREADER_FINDPOSFORRESOURCE_OFFSET UNITYSDK_OFFSET(0x922D1B0)
#define SYSTEM_RESOURCES_RESOURCEREADER_COMPARESTRINGEQUALSNAME_OFFSET UNITYSDK_OFFSET(0x92353F0)
#define SYSTEM_RESOURCES_RESOURCEREADER_ALLOCATESTRINGFORNAMEINDEX_OFFSET UNITYSDK_OFFSET(0x9235660)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETVALUEFORNAMEINDEX_OFFSET UNITYSDK_OFFSET(0x92363A0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x922D740)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_OFFSET UNITYSDK_OFFSET(0x9236D50)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_OFFSET UNITYSDK_OFFSET(0x922DA00)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV1_OFFSET UNITYSDK_OFFSET(0x9236680)
#define SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV1_OFFSET UNITYSDK_OFFSET(0x9236D80)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV2_OFFSET UNITYSDK_OFFSET(0x92367C0)
#define SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV2_OFFSET UNITYSDK_OFFSET(0x9237790)
#define SYSTEM_RESOURCES_RESOURCEREADER_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x92375C0)
#define SYSTEM_RESOURCES_RESOURCEREADER_READRESOURCES_OFFSET UNITYSDK_OFFSET(0x9234DD0)
#define SYSTEM_RESOURCES_RESOURCEREADER__READRESOURCES_OFFSET UNITYSDK_OFFSET(0x9237F50)
#define SYSTEM_RESOURCES_RESOURCEREADER_FINDTYPE_OFFSET UNITYSDK_OFFSET(0x9236900)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceReader_TypeDefinitionIndex = 24825;

	class ResourceReader : public Il2CppObject
	{
	public:
		::System::IO::BinaryReader* _store; // 0x10
		Il2CppObject* _resCache; // 0x18
		::System::Int64 _nameSectionOffset; // 0x20
		::System::Int64 _dataSectionOffset; // 0x28
		::Il2CppArray<::System::Object*>* _nameHashes; // 0x30
		::System::Object** _nameHashesPtr; // 0x38
		::Il2CppArray<::System::Object*>* _namePositions; // 0x40
		::System::Object** _namePositionsPtr; // 0x48
		::Il2CppArray<::System::Object*>* _typeTable; // 0x50
		::Il2CppArray<::System::Object*>* _typeNamePositions; // 0x58
		::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _objFormatter; // 0x60
		::System::Int32 _numResources; // 0x68
		::System::IO::UnmanagedMemoryStream* _ums; // 0x70
		::System::Int32 _version; // 0x78

		::System::Void .ctor(::System::IO::Stream* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadUnalignedI4(::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_READUNALIGNEDI4_OFFSET))(arg, nullptr);
		}

		::System::Void SkipString()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_SKIPSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetNameHash(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEHASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNamePosition(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		ResourceEnumerator* GetEnumeratorInternal()
		{
			return (return (ResourceEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATORINTERNAL_OFFSET))(nullptr);
		}

		::System::Int32 FindPosForResource(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_FINDPOSFORRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Boolean CompareStringEqualsName(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_COMPARESTRINGEQUALSNAME_OFFSET))(str, nullptr);
		}

		::System::String* AllocateStringForNameIndex(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::String*(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_ALLOCATESTRINGFORNAMEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetValueForNameIndex(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETVALUEFORNAMEINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* LoadString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADSTRING_OFFSET))(arg, nullptr);
		}

		::System::Object* LoadObject(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* LoadObject(::System::Int32 arg, ::System::Resources::ResourceTypeCode&* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Resources::ResourceTypeCode&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* LoadObjectV1(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV1_OFFSET))(arg, nullptr);
		}

		::System::Object* _LoadObjectV1(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV1_OFFSET))(arg, nullptr);
		}

		::System::Object* LoadObjectV2(::System::Int32 arg, ::System::Resources::ResourceTypeCode&* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Resources::ResourceTypeCode&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV2_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* _LoadObjectV2(::System::Int32 arg, ::System::Resources::ResourceTypeCode&* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Resources::ResourceTypeCode&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV2_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* DeserializeObject(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_DESERIALIZEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReadResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_READRESOURCES_OFFSET))(nullptr);
		}

		::System::Void _ReadResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__READRESOURCES_OFFSET))(nullptr);
		}

		::System::RuntimeType* FindType(::System::Int32 arg)
		{
			return (return (::System::RuntimeType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_FINDTYPE_OFFSET))(arg, nullptr);
		}

	};
}

