#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x897620)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x897650)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x8976F0)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x897710)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x897750)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x8977C0)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x897830)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x897A50)

namespace BestHTTP::PlatformSupport::Memory
{
	inline static constexpr unsigned int BufferSegment_TypeDefinitionIndex = 23277;

	class BufferSegment : public Il2CppObject
	{
	public:
		::BestHTTP::PlatformSupport::Memory::BufferSegment* Empty; // 0x0
		::Il2CppArray<::System::Object*>* Data; // 0x10
		::System::Int32 Offset; // 0x18
		::System::Int32 Count; // 0x1C

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg, ::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg, ::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSEGMENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

