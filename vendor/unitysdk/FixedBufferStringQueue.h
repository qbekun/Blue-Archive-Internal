#pragma once
#include "unitysdk.h"

#define FIXEDBUFFERSTRINGQUEUE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x9FA85F0)
#define FIXEDBUFFERSTRINGQUEUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9FA8600)
#define FIXEDBUFFERSTRINGQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA8610)
#define FIXEDBUFFERSTRINGQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FA8640)
#define FIXEDBUFFERSTRINGQUEUE_TRYPUSH_OFFSET UNITYSDK_OFFSET(0x9FA8670)
#define FIXEDBUFFERSTRINGQUEUE_TRYPOP_OFFSET UNITYSDK_OFFSET(0x9FA8720)

	inline static constexpr unsigned int FixedBufferStringQueue_TypeDefinitionIndex = 33894;

	class FixedBufferStringQueue : public Il2CppObject
	{
	public:
		::System::Object** m_ReadCursor; // 0x10
		::System::Object** m_WriteCursor; // 0x18
		::System::Object** m_BufferEnd; // 0x20
		::System::Object** m_BufferStart; // 0x28
		::System::Int32 m_BufferLength; // 0x30
		::System::Int32 _Count_k__BackingField; // 0x34

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDBUFFERSTRINGQUEUE_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDBUFFERSTRINGQUEUE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDBUFFERSTRINGQUEUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDBUFFERSTRINGQUEUE_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean TryPush(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDBUFFERSTRINGQUEUE_TRYPUSH_OFFSET))(str, nullptr);
		}

		::System::Boolean TryPop(::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDBUFFERSTRINGQUEUE_TRYPOP_OFFSET))(arg, nullptr);
		}

	};

