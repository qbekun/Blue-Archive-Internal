#pragma once
#include "../../unitysdk.h"

#define E7_NATIVE_NATIVEAUDIOPOINTER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x289FE70)
#define E7_NATIVE_NATIVEAUDIOPOINTER_ASSERTLOADEDANDINITIALIZED_OFFSET UNITYSDK_OFFSET(0x289FF60)
#define E7_NATIVE_NATIVEAUDIOPOINTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x28A0020)
#define E7_NATIVE_NATIVEAUDIOPOINTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x28A0030)
#define E7_NATIVE_NATIVEAUDIOPOINTER_GET_NEXTINDEX_OFFSET UNITYSDK_OFFSET(0x28A0090)
#define E7_NATIVE_NATIVEAUDIOPOINTER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x28A00C0)

namespace E7::Native
{
	inline static constexpr unsigned int NativeAudioPointer_TypeDefinitionIndex = 37983;

	class NativeAudioPointer : public Il2CppObject
	{
	public:
		::System::Int32 amount; // 0x10
		::System::String* soundPath; // 0x18
		::System::Int32 startingIndex; // 0x20
		::System::Int32 currentIndex; // 0x24
		::System::Boolean isUnloaded; // 0x28
		::System::Single _Length_k__BackingField; // 0x2C

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOPOINTER_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void AssertLoadedAndInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOPOINTER_ASSERTLOADEDANDINITIALIZED_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOPOINTER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOPOINTER_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int32 get_NextIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOPOINTER_GET_NEXTINDEX_OFFSET))(nullptr);
		}

		::System::Single get_Length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOPOINTER_GET_LENGTH_OFFSET))(nullptr);
		}

	};
}

