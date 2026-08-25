#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x915C360)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x915C0F0)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x915C410)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x915C530)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x915C710)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x915C720)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x915C740)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x915C750)
#define SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET UNITYSDK_OFFSET(0x915C450)

namespace System::Text
{
	inline static constexpr unsigned int InternalEncoderBestFitFallbackBuffer_TypeDefinitionIndex = 24234;

	class InternalEncoderBestFitFallbackBuffer : public Il2CppObject
	{
	public:
		::System::Char _cBestFit; // 0x30
		::System::Text::InternalEncoderBestFitFallback* _oFallback; // 0x38
		::System::Int32 _iCount; // 0x40
		::System::Int32 _iSize; // 0x44
		::System::Object* s_InternalSyncObject; // 0x0

		::System::Object* get_InternalSyncObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Text::InternalEncoderBestFitFallback* arg)
		{
			((::System::Void(*)(::System::Text::InternalEncoderBestFitFallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Fallback(::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Fallback(::System::Char arg, ::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Boolean MovePrevious()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_RESET_OFFSET))(nullptr);
		}

		::System::Char TryBestFit(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALENCODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET))(arg, nullptr);
		}

	};
}

