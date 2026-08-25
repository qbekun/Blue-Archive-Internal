#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ModifierCheckTarget; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ModifierCheckTarget_TypeDefinitionIndex = 13821;

	class ModifierCheckTarget : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::ModifierCheckTarget* Caster; // 0x0
		::MX::Logic::Data::ModifierCheckTarget* Target; // 0x0
		::MX::Logic::Data::ModifierCheckTarget* CasterAlly; // 0x0
		::MX::Logic::Data::ModifierCheckTarget* CasterEnemy; // 0x0
		::MX::Logic::Data::ModifierCheckTarget* All; // 0x0
		::MX::Logic::Data::ModifierCheckTarget* CasterAllyExceptCaster; // 0x0

	};
}

