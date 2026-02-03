#include "OpenGLEnums.hpp"

#include <iostream>



std::ostream & GL::operator<<(std::ostream & s, Error val)
{
	switch (val)
	{
		case Error::NoError: s << "NoError"; break;
		case Error::InvalidEnum: s << "InvalidEnum"; break;
		case Error::InvalidValue: s << "InvalidValue"; break;
		case Error::InvalidOperation: s << "InvalidOperation"; break;
		case Error::InvalidFramebufferOperation: s << "InvalidFramebufferOperation"; break;
		case Error::OutOfMemory: s << "OutOfMemory"; break;
		case Error::StackUnderflow: s << "StackUnderflow"; break;
		case Error::StackOverflow: s << "StackOverflow"; break;
		default: s << "Error: " << ((unsigned int)val); break;
	}
	return s;
}



GL::ClearMask GL::operator|(ClearMask v0, ClearMask v1) { return (ClearMask)((unsigned int)v0 | (unsigned int)v1); }



std::ostream & GL::operator<<(std::ostream & s, AttributeType val)
{
	switch (val)
	{
		case AttributeType::HalfFloat: s << "HalfFloat"; break;
		case AttributeType::Float: s << "Float"; break;
		case AttributeType::Double: s << "Double"; break;
		case AttributeType::Fixed: s << "Fixed"; break;
		case AttributeType::Int2101010Rev: s << "Int2101010Rev"; break;
		case AttributeType::UnsignedInt2101010Rev: s << "UnsignedInt2101010Rev"; break;
		case AttributeType::UnsignedInt10f11f11fRev: s << "UnsignedInt10f11f11fRev"; break;
		case AttributeType::Byte: s << "Byte"; break;
		case AttributeType::UnsignedByte: s << "UnsignedByte"; break;
		case AttributeType::Short: s << "Short"; break;
		case AttributeType::UnsignedShort: s << "UnsignedShort"; break;
		case AttributeType::Int: s << "Int"; break;
		case AttributeType::UnsignedInt: s << "UnsignedInt"; break;
		default: s << "AttributeType: " << ((unsigned int)val); break;
	}
	return s;
}

std::ostream & GL::operator<<(std::ostream & s, AttributeIntType val)
{
	switch (val)
	{
		case AttributeIntType::Byte: s << "Byte"; break;
		case AttributeIntType::UnsignedByte: s << "UnsignedByte"; break;
		case AttributeIntType::Short: s << "Short"; break;
		case AttributeIntType::UnsignedShort: s << "UnsignedShort"; break;
		case AttributeIntType::Int: s << "Int"; break;
		case AttributeIntType::UnsignedInt: s << "UnsignedInt"; break;
		default: s << "AttributeIntType: " << ((unsigned int)val); break;
	}
	return s;
}
