#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA22F950)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA22F960)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_RESET_OFFSET UNITYSDK_OFFSET(0xA22F980)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22F990)

namespace UnityEngine
{
	inline static constexpr unsigned int CustomYieldInstruction_TypeDefinitionIndex = 31150;

	class CustomYieldInstruction : public Il2CppObject
	{
	public:
		::System::Boolean get_keepWaiting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_GET_KEEPWAITING_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

