#pragma once
#include "unitysdk.h"

class ToyControllerEventHandler;
namespace NPA { class NXPToyControllerType; }
namespace NPA { class NXPToyControllerEventInfo; }

#define CONTROLLERICONTYPEPROVIDER_REGISTERTOYCONTROLLEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xC79550)
#define CONTROLLERICONTYPEPROVIDER_ONTOYCONTROLLERCHANGED_OFFSET UNITYSDK_OFFSET(0xC79800)
#define CONTROLLERICONTYPEPROVIDER_GETACTIVECONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0xC796D0)
#define CONTROLLERICONTYPEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC79890)
#define CONTROLLERICONTYPEPROVIDER_GETICONTYPE_OFFSET UNITYSDK_OFFSET(0xC798A0)

	inline static constexpr unsigned int ControllerIconTypeProvider_TypeDefinitionIndex = 9044;

	class ControllerIconTypeProvider : public Il2CppObject
	{
	public:
		ToyControllerEventHandler* _handler; // 0x10
		::NPA::NXPToyControllerType* Type; // 0x18

		::System::Void RegisterToyControllerEventHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERICONTYPEPROVIDER_REGISTERTOYCONTROLLEREVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Void OnToyControllerChanged(::System::Boolean arg, ::NPA::NXPToyControllerEventInfo* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::NPA::NXPToyControllerEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERICONTYPEPROVIDER_ONTOYCONTROLLERCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::NPA::NXPToyControllerType* GetActiveControllerType()
		{
			return ((::NPA::NXPToyControllerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERICONTYPEPROVIDER_GETACTIVECONTROLLERTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERICONTYPEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::NXPToyControllerType* GetIconType()
		{
			return ((::NPA::NXPToyControllerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERICONTYPEPROVIDER_GETICONTYPE_OFFSET))(nullptr);
		}

	};

