#pragma once
#include "unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeLibraryHandle; }

#define USER32_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x911F0E0)

	inline static constexpr unsigned int User32_TypeDefinitionIndex = 23546;

	class User32 : public Il2CppObject
	{
	public:
		::System::Int32 LoadString(::Microsoft::Win32::SafeHandles::SafeLibraryHandle* arg, ::System::Int32 arg, ::System::Text::StringBuilder* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeLibraryHandle*, ::System::Int32, ::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + USER32_LOADSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

