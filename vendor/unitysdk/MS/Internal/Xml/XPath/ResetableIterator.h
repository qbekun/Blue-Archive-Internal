#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class ResetableIterator; }

#define MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9949280)
#define MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99492D0)
#define MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_RESETCOUNT_OFFSET UNITYSDK_OFFSET(0x994B800)
#define MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int ResetableIterator_TypeDefinitionIndex = 28300;

	class ResetableIterator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::ResetableIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::ResetableIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ResetCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_RESETCOUNT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_RESETABLEITERATOR_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

	};
}

