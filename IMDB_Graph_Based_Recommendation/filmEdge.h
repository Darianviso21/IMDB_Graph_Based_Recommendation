#pragma once
#include"film.h"
class filmEdge
{
public:
	// movie from
	int fromID;
	// movie to
	int toID;
	// score
	float similarityScore;

	// default constructor
	filmEdge()
	{
		this->similarityScore = -1;
	}

	// constructor for 2 films and their score
	filmEdge(int fromID, int toID, float similiarityScore)
	{
		this->fromID = fromID;
		this->toID = toID;
		similarityScore = similarityScore;
	}

	// <, >, and == operators
	bool operator< (const filmEdge& other)
	{
		if (this->similarityScore < other.similarityScore) {
			return true;
		}
		return false;
	}

	bool operator> (const filmEdge& other)
	{
		if (this->similarityScore > other.similarityScore) {
			return true;
		}
		return false;
	}

	bool operator== (const filmEdge& other)
	{
		if (this->fromID == other.fromID and this->toID == other.toID) {
			return true;
		}
		return false;
	}
};
