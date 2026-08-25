#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_EXITGUIEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA284870)

namespace UnityEngine
{
	inline static constexpr unsigned int ExitGUIException_TypeDefinitionIndex = 36551;

	class ExitGUIException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXITGUIEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

