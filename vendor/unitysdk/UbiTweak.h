#pragma once
#include "unitysdk.h"

#define UBITWEAK_.CTOR_OFFSET UNITYSDK_OFFSET(0x774A80)
#define UBITWEAK_RESET_OFFSET UNITYSDK_OFFSET(0x774B40)
#define UBITWEAK_RESET_OFFSET UNITYSDK_OFFSET(0x774AE0)
#define UBITWEAK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x774C10)
#define UBITWEAK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x774C40)
#define UBITWEAK_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x774C80)
#define UBITWEAK_SET_FIRST_OFFSET UNITYSDK_OFFSET(0x774BD0)
#define UBITWEAK_GET_FINAL_OFFSET UNITYSDK_OFFSET(0x774CB0)
#define UBITWEAK_SET_FINAL_OFFSET UNITYSDK_OFFSET(0x774CE0)
#define UBITWEAK_ADVANCEPOSITION_OFFSET UNITYSDK_OFFSET(0x774D30)
#define UBITWEAK_GETWORDS_OFFSET UNITYSDK_OFFSET(0x774F40)
#define UBITWEAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x774F50)

	inline static constexpr unsigned int UbiTweak_TypeDefinitionIndex = 22614;

	class UbiTweak : public Il2CppObject
	{
	public:
		::System::UInt64 LOW_RANGE; // 0x0
		::System::UInt64 T1_FINAL; // 0x0
		::System::UInt64 T1_FIRST; // 0x0
		::Il2CppArray<::System::Object*>* tweak; // 0x10
		::System::Boolean extendedPosition; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset(UbiTweak* arg)
		{
			((::System::Void(*)(UbiTweak*, ::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_RESET_OFFSET))(nullptr);
		}

		::System::UInt32 get_Type()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_First()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_GET_FIRST_OFFSET))(nullptr);
		}

		::System::Void set_First(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_SET_FIRST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Final()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_GET_FINAL_OFFSET))(nullptr);
		}

		::System::Void set_Final(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_SET_FINAL_OFFSET))(arg, nullptr);
		}

		::System::Void AdvancePosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_ADVANCEPOSITION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetWords()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_GETWORDS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UBITWEAK_TOSTRING_OFFSET))(nullptr);
		}

	};

