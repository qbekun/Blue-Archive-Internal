#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::PlatformSupport::Memory { class BufferDesc; }

#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERDESC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x898050)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERDESC_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8980F0)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x897F40)

namespace BestHTTP::PlatformSupport::Memory
{
	inline static constexpr unsigned int BufferDesc_TypeDefinitionIndex = 23280;

	class BufferDesc : public Il2CppObject
	{
	public:
		::BestHTTP::PlatformSupport::Memory::BufferDesc* Empty; // 0x0
		::Il2CppArray<::System::Object*>* buffer; // 0x10
		::System::DateTime* released; // 0x18

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERDESC_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERDESC_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERDESC_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

