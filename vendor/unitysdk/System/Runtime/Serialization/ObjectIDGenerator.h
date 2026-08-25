#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x91FB620)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x91FB700)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_GETID_OFFSET UNITYSDK_OFFSET(0x91FB7D0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_HASID_OFFSET UNITYSDK_OFFSET(0x91FBD40)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_REHASH_OFFSET UNITYSDK_OFFSET(0x91FB9D0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91FBEA0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectIDGenerator_TypeDefinitionIndex = 24592;

	class ObjectIDGenerator : public Il2CppObject
	{
	public:
		::System::Int32 m_currentCount; // 0x10
		::System::Int32 m_currentSize; // 0x14
		::Il2CppArray<::System::Object*>* m_ids; // 0x18
		::Il2CppArray<::System::Object*>* m_objs; // 0x20
		::Il2CppArray<::System::Object*>* sizes; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 FindElement(::System::Object* arg, bool&* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_FINDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetId(::System::Object* arg, bool&* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_GETID_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 HasId(::System::Object* arg, bool&* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_HASID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Rehash()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_REHASH_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

