#pragma once
#include "../unitysdk.h"

namespace DebugMX { class DrawType; }

namespace DebugMX
{
	inline static constexpr unsigned int DrawType_TypeDefinitionIndex = 10138;

	class DrawType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::DebugMX::DrawType* Debug; // 0x0
		::DebugMX::DrawType* Gizmo; // 0x0

	};
}

