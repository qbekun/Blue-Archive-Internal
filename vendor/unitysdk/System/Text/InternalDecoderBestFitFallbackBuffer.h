#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x9159100)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9158EB0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x91591B0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x9159380)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x9159390)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x91593A0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x91593B0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET UNITYSDK_OFFSET(0x9159200)

namespace System::Text
{
	inline static constexpr unsigned int InternalDecoderBestFitFallbackBuffer_TypeDefinitionIndex = 24223;

	class InternalDecoderBestFitFallbackBuffer : public Il2CppObject
	{
	public:
		::System::Char _cBestFit; // 0x20
		::System::Int32 _iCount; // 0x24
		::System::Int32 _iSize; // 0x28
		::System::Text::InternalDecoderBestFitFallback* _oFallback; // 0x30
		::System::Object* s_InternalSyncObject; // 0x0

		::System::Object* get_InternalSyncObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Text::InternalDecoderBestFitFallback* arg)
		{
			((::System::Void(*)(::System::Text::InternalDecoderBestFitFallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_RESET_OFFSET))(nullptr);
		}

		::System::Int32 InternalFallback(::Il2CppArray<::System::Object*>* arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Char TryBestFit(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Char(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET))(arg, nullptr);
		}

	};
}

