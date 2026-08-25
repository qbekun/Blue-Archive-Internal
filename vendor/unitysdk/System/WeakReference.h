#pragma once
#include "../unitysdk.h"

#define SYSTEM_WEAKREFERENCE_ALLOCATEHANDLE_OFFSET UNITYSDK_OFFSET(0x93CB190)
#define SYSTEM_WEAKREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CB1C0)
#define SYSTEM_WEAKREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CB1D0)
#define SYSTEM_WEAKREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CB200)
#define SYSTEM_WEAKREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CB240)
#define SYSTEM_WEAKREFERENCE_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x93CB360)
#define SYSTEM_WEAKREFERENCE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x93CB380)
#define SYSTEM_WEAKREFERENCE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x93CB3C0)
#define SYSTEM_WEAKREFERENCE_GET_TRACKRESURRECTION_OFFSET UNITYSDK_OFFSET(0x93CB3D0)
#define SYSTEM_WEAKREFERENCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x93CB3E0)
#define SYSTEM_WEAKREFERENCE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93CB4B0)

namespace System
{
	inline static constexpr unsigned int WeakReference_TypeDefinitionIndex = 24014;

	class WeakReference : public Il2CppObject
	{
	public:
		::System::Boolean isLongReference; // 0x10
		::System::Runtime::InteropServices::GCHandle* gcHandle; // 0x18

		::System::Void AllocateHandle(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_ALLOCATEHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GET_ISALIVE_OFFSET))(nullptr);
		}

		::System::Object* get_Target()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_Target(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TrackResurrection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GET_TRACKRESURRECTION_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

