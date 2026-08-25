#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Physics2D::Bodies { class Body2D; }

#define MX_LOGIC_BATTLEENTITIES_IENTITYBODY_GETBODY2D_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int IEntityBody_TypeDefinitionIndex = 13293;

	class IEntityBody : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Bodies::Body2D* GetBody2D()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IENTITYBODY_GETBODY2D_OFFSET))(nullptr);
		}

	};
}

