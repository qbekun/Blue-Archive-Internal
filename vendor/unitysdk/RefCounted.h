#pragma once
#include "unitysdk.h"

#define REFCOUNTED_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define REFCOUNTED_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define REFCOUNTED_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define REFCOUNTED_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define REFCOUNTED_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define REFCOUNTED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int RefCounted_TypeDefinitionIndex = 30612;

	class RefCounted : public Il2CppObject
	{
	public:
		::System::UInt32 m_NextId; // 0x0
		::System::Int32 m_RefCount; // 0x0
		::System::UInt32 m_Id; // 0x0
		Il2CppObject* value; // 0x0

		::System::Int32 get_refCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + REFCOUNTED_GET_REFCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFCOUNTED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Acquire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFCOUNTED_ACQUIRE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFCOUNTED_RELEASE_OFFSET))(nullptr);
		}

		Il2CppObject* Copy()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFCOUNTED_COPY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFCOUNTED_.CCTOR_OFFSET))(nullptr);
		}

	};

