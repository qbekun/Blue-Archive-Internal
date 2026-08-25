#pragma once
#include "unitysdk.h"

#define IEPISODECONTINUEHANDLER_GETEPISODENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define IEPISODECONTINUEHANDLER_ONOK_OFFSET UNITYSDK_OFFSET(0x000000)
#define IEPISODECONTINUEHANDLER_GETCHAPTERNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define IEPISODECONTINUEHANDLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IEpisodeContinueHandler_TypeDefinitionIndex = 7812;

	class IEpisodeContinueHandler : public Il2CppObject
	{
	public:
		::System::String* GetEpisodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPISODECONTINUEHANDLER_GETEPISODENAME_OFFSET))(nullptr);
		}

		::System::Void OnOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPISODECONTINUEHANDLER_ONOK_OFFSET))(nullptr);
		}

		::System::String* GetChapterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPISODECONTINUEHANDLER_GETCHAPTERNAME_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPISODECONTINUEHANDLER_ONCANCEL_OFFSET))(nullptr);
		}

	};

